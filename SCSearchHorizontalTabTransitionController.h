//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchTabTransitionControlling-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableIndexSet, NSString, UIPanGestureRecognizer;
@protocol SCSearchTabTransitionControllingDelegate;

@interface SCSearchHorizontalTabTransitionController : NSObject <UIGestureRecognizerDelegate, SCSearchTabTransitionControlling>
{
    UIPanGestureRecognizer *_tabTransitionPanGestureRecognizer;
    double _gestureBeginHorizontalOffsetRatio;
    NSMutableIndexSet *_mutablePanCreatedIndexSet;
    unsigned long long _numberOfTabs;
    id <SCSearchTabTransitionControllingDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_handleMoveToIndexCompletionWithFromIndex:(unsigned long long)arg1;
- (void)_handlePanGestureCompletionWithFinished:(_Bool)arg1;
- (void)_handleTabTransitionPan:(id)arg1;
- (void)_setNeedsLayoutContainerView;
- (void)_updateTabIndex:(unsigned long long)arg1;
@property(nonatomic) __weak id <SCSearchTabTransitionControllingDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)gestureRecognizerForTabTransition;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)switchToTabAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (struct CGRect)viewFrameForTabAtIndex:(unsigned long long)arg1 currentIndex:(unsigned long long)arg2 contentOffset:(struct CGPoint)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

