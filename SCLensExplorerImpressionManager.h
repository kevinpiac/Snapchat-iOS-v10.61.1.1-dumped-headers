//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImpressionTrackingDelegate-Protocol.h"
#import "SCLensExplorerImpressionMangerProtocol-Protocol.h"

@class NSString, SCImpressionTracker, SCLensExplorerHistoryManager, SCQueuePerformer;
@protocol SCLensExplorerImpressionManagerDelegate;

@interface SCLensExplorerImpressionManager : NSObject <SCImpressionTrackingDelegate, SCLensExplorerImpressionMangerProtocol>
{
    SCImpressionTracker *_impressionTracker;
    SCQueuePerformer *_performer;
    id <SCLensExplorerImpressionManagerDelegate> _delegate;
    SCLensExplorerHistoryManager *_historyManager;
}

- (void).cxx_destruct;
- (id)_impressionItemFromImpressionArray:(id)arg1 identifier:(id)arg2;
@property(nonatomic) __weak id <SCLensExplorerImpressionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SCLensExplorerHistoryManager *historyManager; // @synthesize historyManager=_historyManager;
- (id)impressionItems;
- (void)impressionTracker:(id)arg1 didReachThresholdForItems:(id)arg2 date:(id)arg3;
- (id)initWithHistoryManager:(id)arg1 impressionTracker:(id)arg2 performer:(id)arg3;
- (void)reset;
- (void)trackTapOnViewItem:(id)arg1;
- (void)trackViewItems:(id)arg1 date:(id)arg2 viewPort:(struct CGRect)arg3;
- (void)updateImpressionItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

