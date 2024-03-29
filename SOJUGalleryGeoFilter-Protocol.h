//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUDynamicContentSetting, SOJUUnlockablesArSegmentationFilter, SOJUUnlockablesAudio, SOJUUnlockablesAutoStacking, SOJUUnlockablesCarouselGroup, SOJUUnlockablesPostCaptureLensData;

@protocol SOJUGalleryGeoFilter <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUUnlockablesArSegmentationFilter *arSegmentation;
@property(readonly, copy, nonatomic) SOJUUnlockablesAudio *audio;
@property(readonly, copy, nonatomic) SOJUUnlockablesAutoStacking *autoStacking;
@property(readonly, copy, nonatomic) NSNumber *belowDrawingLayer;
@property(readonly, copy, nonatomic) SOJUUnlockablesCarouselGroup *carouselGroup;
@property(readonly, copy, nonatomic) NSArray *dynamicContent;
@property(readonly, copy, nonatomic) SOJUDynamicContentSetting *dynamicContentSetting;
@property(readonly, copy, nonatomic) NSArray *geofilterMarkups;
@property(readonly, copy, nonatomic) NSString *idValue;
@property(readonly, copy, nonatomic) NSString *imageUrl;
@property(readonly, copy, nonatomic) NSDictionary *imageUrlParams;
@property(readonly, copy, nonatomic) NSNumber *isAnimated;
@property(readonly, copy, nonatomic) NSNumber *isSponsored;
@property(readonly, copy, nonatomic) NSString *positionSetting;
@property(readonly, copy, nonatomic) SOJUUnlockablesPostCaptureLensData *postCaptureLensData;
@property(readonly, copy, nonatomic) NSString *scaleSetting;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSString *unlockableContentType;
@end

