//
//  JMapError.h
//  JMapCore
//
//  Created by Aaron Wong on 2016-10-21.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum JMapErrorCode : NSUInteger {
    CouldNotConnect,
    AuthenticationError,
    MalformedJson,
    MapSVGError,
    URIError,
    IncorrectObjectType,
    NotFound,
    UndefinedError
} JMapErrorCode;

/**
 *  The JMapError model.
 */
@interface JMapError : NSObject
/**
 *  The code of the error.
 *  @see JMapErrorCode
 */
@property (nonatomic, strong, readonly, nonnull) NSString * code;
/**
 *  The message of the error.
 */
@property (nonatomic, strong, readonly, nonnull) NSString * message;
/**
 *  The description of the error.
 */
@property (nonatomic, strong, readonly, nonnull) NSString * errorDescription;
/**
 *  Initializes a JMapError.
 *
 *  @param response The NSDictionary error data that gets returned from a web response.
 *  @return An initialized JMapError instance.
 */
+ (nonnull JMapError *)initWithWebResponse:(nonnull NSDictionary *)response;
/**
 *  Initializes a JMapError.
 *
 *  @param errorType The code associated to the error.
 *  @param message The message of the error.
 *  @param description The description of the error.
 *  @return An initialized JMapError instance.
 */
- (nonnull instancetype)initWithErrorType:(JMapErrorCode)errorType message:(nullable NSString *)message description:(nullable NSString *)description;

@end
