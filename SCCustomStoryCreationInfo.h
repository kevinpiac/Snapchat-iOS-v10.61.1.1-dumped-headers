//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCCustomStoryCreationInfo : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSArray *_privateStory_posterIdsPermitted;
    NSArray *_privateStory_viewerIdsPermitted;
    _Bool _customStory_shouldCreateGroupChat;
    NSString *_customStory_mischiefId;
    NSArray *_customStory_posterIdsPermitted;
    NSArray *_customStory_viewerIdsPermitted;
    double _geoStory_latitude;
    double _geoStory_longtitude;
    NSString *_geoStory_geoFenceDescription;
    long long _geoStory_privacyType;
}

+ (id)customStoryWithShouldCreateGroupChat:(_Bool)arg1 mischiefId:(id)arg2 posterIdsPermitted:(id)arg3 viewerIdsPermitted:(id)arg4;
+ (id)geoStoryWithLatitude:(double)arg1 longtitude:(double)arg2 geoFenceDescription:(id)arg3 privacyType:(long long)arg4;
+ (id)privateStoryWithPosterIdsPermitted:(id)arg1 viewerIdsPermitted:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchPrivateStory:(CDUnknownBlockType)arg1 customStory:(CDUnknownBlockType)arg2 geoStory:(CDUnknownBlockType)arg3;

@end

