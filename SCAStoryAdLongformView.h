//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAStoryAdView.h"

@class NSNumber, NSString;

@interface SCAStoryAdLongformView : SCAStoryAdView
{
    NSNumber *timeViewed;
    NSNumber *durationSec;
    NSNumber *loadingScreenTimeSec;
    NSNumber *pageHeightTotalPixel;
    NSNumber *pageHeightSeenPixel;
    NSNumber *pageIsLoadedOnEntry;
    NSNumber *pageIsLoadedOnExit;
    NSNumber *pageUrlCount;
    NSNumber *pageLoadErrorCount;
    NSNumber *inlineVideoTimeViewed;
    NSNumber *inlineVideoViewCount;
    NSNumber *inlineVideoTotalCount;
    NSNumber *userPermissionPromptCount;
    NSNumber *userPermissionPromptAllowedCount;
    NSNumber *deepLinkedToAppCount;
    NSNumber *deepLinkedToAppInstallCount;
    NSNumber *withSubscription;
    NSNumber *lensIsLoadedOnEntry;
    NSNumber *lensIsLoadedOnExit;
    NSNumber *interactionIndexPos;
    NSNumber *interactionIndexCount;
    long long longformType;
    long long adProductSourceType;
    NSString *videoPartnerId;
    NSString *webpageFieldsAutofillDetected;
    NSString *webpageFieldsDetected;
    NSString *onEditAutofilledFields;
    NSString *lensSessionId;
    NSString *tabType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAdProductSourceType;
- (long long)getDeepLinkedToAppCount;
- (long long)getDeepLinkedToAppInstallCount;
- (double)getDurationSec;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getInlineVideoTimeViewed;
- (long long)getInlineVideoTotalCount;
- (long long)getInlineVideoViewCount;
- (long long)getInteractionIndexCount;
- (long long)getInteractionIndexPos;
- (_Bool)getLensIsLoadedOnEntry;
- (_Bool)getLensIsLoadedOnExit;
- (id)getLensSessionId;
- (double)getLoadingScreenTimeSec;
- (long long)getLongformType;
- (id)getOnEditAutofilledFields;
- (long long)getPageHeightSeenPixel;
- (long long)getPageHeightTotalPixel;
- (_Bool)getPageIsLoadedOnEntry;
- (_Bool)getPageIsLoadedOnExit;
- (long long)getPageLoadErrorCount;
- (long long)getPageUrlCount;
- (double)getPerUserSamplingRate;
- (id)getTabType;
- (double)getTimeViewed;
- (long long)getUserPermissionPromptAllowedCount;
- (long long)getUserPermissionPromptCount;
- (id)getVideoPartnerId;
- (id)getWebpageFieldsAutofillDetected;
- (id)getWebpageFieldsDetected;
- (_Bool)getWithSubscription;
- (id)init;
- (void)setAdProductSourceType:(long long)arg1;
- (void)setDeepLinkedToAppCount:(long long)arg1;
- (void)setDeepLinkedToAppInstallCount:(long long)arg1;
- (void)setDurationSec:(double)arg1;
- (void)setInlineVideoTimeViewed:(double)arg1;
- (void)setInlineVideoTotalCount:(long long)arg1;
- (void)setInlineVideoViewCount:(long long)arg1;
- (void)setInteractionIndexCount:(long long)arg1;
- (void)setInteractionIndexPos:(long long)arg1;
- (void)setLensIsLoadedOnEntry:(_Bool)arg1;
- (void)setLensIsLoadedOnExit:(_Bool)arg1;
- (void)setLensSessionId:(id)arg1;
- (void)setLoadingScreenTimeSec:(double)arg1;
- (void)setLongformType:(long long)arg1;
- (void)setOnEditAutofilledFields:(id)arg1;
- (void)setPageHeightSeenPixel:(long long)arg1;
- (void)setPageHeightTotalPixel:(long long)arg1;
- (void)setPageIsLoadedOnEntry:(_Bool)arg1;
- (void)setPageIsLoadedOnExit:(_Bool)arg1;
- (void)setPageLoadErrorCount:(long long)arg1;
- (void)setPageUrlCount:(long long)arg1;
- (void)setTabType:(id)arg1;
- (void)setTimeViewed:(double)arg1;
- (void)setUserPermissionPromptAllowedCount:(long long)arg1;
- (void)setUserPermissionPromptCount:(long long)arg1;
- (void)setVideoPartnerId:(id)arg1;
- (void)setWebpageFieldsAutofillDetected:(id)arg1;
- (void)setWebpageFieldsDetected:(id)arg1;
- (void)setWithSubscription:(_Bool)arg1;

@end
