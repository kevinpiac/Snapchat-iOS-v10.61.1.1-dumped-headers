//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCOnDemandGeofilterEventsManager, SCOnDemandGeofilterLineItemEvent;

@interface SCOnDemandGeofilterEventsLogger : NSObject
{
    double _startTimeStampOnCurrentPage;
    SCOnDemandGeofilterEventsManager *_eventManager;
    SCOnDemandGeofilterLineItemEvent *_lineItemEvent;
}

- (void).cxx_destruct;
- (void)didBecomeActive;
- (void)fireAbandonmentSurveyResponseEventWithSurveyResponseKey:(id)arg1;
- (void)fireAutoReviewEventWithPreRenderingAssetStructureId:(id)arg1 withAutoApprovalStatus:(id)arg2 withAutoRejectionCode:(id)arg3 withAutoUndecidedCode:(id)arg4 withUserCanMakePayments:(_Bool)arg5;
- (void)fireDeeplinkEventWithCampaign:(id)arg1 withSource:(id)arg2 withMedium:(id)arg3 withContent:(id)arg4;
- (void)firePageViewEventWithNextPage:(long long)arg1 withExitEvent:(long long)arg2;
- (void)firePageViewEventWithNextPage:(long long)arg1 withExitEvent:(long long)arg2 pendingCollection:(_Bool)arg3 forLineItemId:(id)arg4;
- (id)initWithEventManager:(id)arg1;
@property(retain, nonatomic) SCOnDemandGeofilterLineItemEvent *lineItemEvent; // @synthesize lineItemEvent=_lineItemEvent;
- (void)openPageView:(long long)arg1;
- (void)registerLineItemEventForDataController:(id)arg1;
@property(readonly, nonatomic) NSString *sessionId;
- (void)trackODGEvent:(id)arg1;
- (void)willResignActive;

@end

