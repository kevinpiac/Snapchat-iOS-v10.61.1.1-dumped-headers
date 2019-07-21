//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, SOJUAdAdFlagData, SOJUAdAdToLensImpressionTrack, SOJUAdAppInstallImpressionTrack, SOJUAdCognacMetadata, SOJUAdCollectionImpressionTrack, SOJUAdDeepLinkImpressionTrack, SOJUAdFilterCarouselImpressionTrack, SOJUAdFilterImpressionTrack, SOJUAdLensCarouselImpressionTrack, SOJUAdLensImpressionTrack, SOJUAdLensSlotImpressionTrack, SOJUAdLocalWebpageImpressionTrack, SOJUAdLongformVideoImpressionTrack, SOJUAdRemoteWebpageImpressionTrack, SOJUAdStoryImpressionTrack, SOJUAdSubscribeImpressionTrack, SOJUAdThreeVImpressionTrack, SOJUAdUnlockableViewImpressionTrack;

@interface SOJUAdImpressionDataBuilder : NSObject
{
    NSString *_adType;
    SOJUAdThreeVImpressionTrack *_threeV;
    SOJUAdAppInstallImpressionTrack *_appInstall;
    SOJUAdLongformVideoImpressionTrack *_longformVideo;
    SOJUAdRemoteWebpageImpressionTrack *_remoteWebpage;
    SOJUAdLocalWebpageImpressionTrack *_localWebpage;
    SOJUAdStoryImpressionTrack *_story;
    NSArray *_thirdPartyUrls;
    NSDictionary *_viewContext;
    SOJUAdLensSlotImpressionTrack *_lensSlot;
    SOJUAdLensCarouselImpressionTrack *_lensCarousel;
    SOJUAdFilterCarouselImpressionTrack *_filterCarousel;
    SOJUAdDeepLinkImpressionTrack *_deepLink;
    SOJUAdAdFlagData *_adFlagData;
    SOJUAdFilterImpressionTrack *_filter;
    SOJUAdUnlockableViewImpressionTrack *_unlockableView;
    SOJUAdLensImpressionTrack *_lens;
    SOJUAdSubscribeImpressionTrack *_subscribe;
    NSNumber *_screenWidth;
    NSNumber *_screenHeight;
    NSNumber *_creativeHeight;
    NSNumber *_creativeWidth;
    SOJUAdAdToLensImpressionTrack *_adToLens;
    NSNumber *_isUnskippableAd;
    SOJUAdCollectionImpressionTrack *_collection;
    SOJUAdCognacMetadata *_cognac;
}

+ (id)withJUAdImpressionData:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAdFlagData:(id)arg1;
- (id)setAdToLens:(id)arg1;
- (id)setAdType:(id)arg1;
- (id)setAdTypeEnum:(long long)arg1;
- (id)setAppInstall:(id)arg1;
- (id)setCognac:(id)arg1;
- (id)setCollection:(id)arg1;
- (id)setCreativeHeight:(id)arg1;
- (id)setCreativeHeightValue:(long long)arg1;
- (id)setCreativeWidth:(id)arg1;
- (id)setCreativeWidthValue:(long long)arg1;
- (id)setDeepLink:(id)arg1;
- (id)setFilter:(id)arg1;
- (id)setFilterCarousel:(id)arg1;
- (id)setIsUnskippableAd:(id)arg1;
- (id)setIsUnskippableAdValue:(_Bool)arg1;
- (id)setLens:(id)arg1;
- (id)setLensCarousel:(id)arg1;
- (id)setLensSlot:(id)arg1;
- (id)setLocalWebpage:(id)arg1;
- (id)setLongformVideo:(id)arg1;
- (id)setRemoteWebpage:(id)arg1;
- (id)setScreenHeight:(id)arg1;
- (id)setScreenHeightValue:(long long)arg1;
- (id)setScreenWidth:(id)arg1;
- (id)setScreenWidthValue:(long long)arg1;
- (id)setStory:(id)arg1;
- (id)setSubscribe:(id)arg1;
- (id)setThirdPartyUrls:(id)arg1;
- (id)setThreeV:(id)arg1;
- (id)setUnlockableView:(id)arg1;
- (id)setViewContext:(id)arg1;

@end
