//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaSubscribeButtonLayerViewDelegate-Protocol.h"

@class NSString, SCOperaSubscribeButtonLayerView;

@interface SCOperaSubscribeButtonLayerViewController : SCOperaLayerViewController <SCOperaSubscribeButtonLayerViewDelegate>
{
    SCOperaSubscribeButtonLayerView *_layerView;
}

- (void).cxx_destruct;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)loadView;
- (void)operaSubscribeButtonLayerDidTapSubscribeButton:(id)arg1 shouldSubscribe:(_Bool)arg2;
- (void)sendUpdateChromeMaxX:(double)arg1;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)viewDidFullyAppear;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
