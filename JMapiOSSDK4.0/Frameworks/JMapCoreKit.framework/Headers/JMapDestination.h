//
//  JMapDestination.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-21.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapLocation;
@class JMapUriCollection;
@class JMapWaypoint;

@interface JMapDestination : JMapBaseModel

/*!
 * Status of the destination
 * 0 - invalid
 * 1 - valid
 */
@property (nonatomic, assign, readonly) BOOL status;
/*!
 * Unit Number field in map builder/content manager
 */
@property (nonatomic, strong, readonly, nullable) NSString *unitNumber;
/*!
 * Name of the destination defined by user in content manager
 */
@property (nonatomic, strong, readonly, nullable) NSString *name;
/*!
 * Text description of the destination
 */
@property (nonatomic, strong, readonly, nullable) NSString *description;
/*!
 * Logo uri of the destination
 */
@property (nonatomic, strong, readonly, nullable) NSString *primaryUri;
/*!
 * Language code associated to the destination
 */
@property (nonatomic, strong, readonly, nullable) NSString *localeCode;
/*!
 * List of JMapExtensor objects associated with the destination
 */
@property (nonatomic, strong, readonly, nullable) NSArray<NSDictionary *> *destinationExtensors;
/*!
 * List of uri's associated with the destination
 */
@property (nonatomic, strong, readonly, nullable) JMapUriCollection *uris;
/*!
 * List of JMapLocation objects associated with the destination
 */
@property (nonatomic, strong, readonly, nullable) NSArray<JMapLocation *> *locations;
/*!
 * List of Category Id strings associated with the destination
 */
@property (nonatomic, strong, readonly, nullable) NSArray <NSString *> *categoryIds;
/*!
 * List of keyword strings associated with the destination
 */
@property (nonatomic, strong, readonly, nullable) NSArray <NSString *> *keywords;
/*!
 * List of tag strings associated with the destination
 */
@property (nonatomic, strong, readonly, nullable) NSArray <NSString *> *tags;
/*!
 * List of JMapWaypoint objects associated with the destination
 */
@property (nonatomic, strong, readonly, nullable) NSArray <JMapWaypoint *> *waypoints;
/*!
 * Display mode associated with the destination for determining the content displayed in the destination unit
 * 0 - Display none
 * 1 - Display Text
 * 2 - Display Image
 */
@property (nonatomic, strong, readonly, nullable) NSNumber *displayMode;

-(nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dict;


@end
