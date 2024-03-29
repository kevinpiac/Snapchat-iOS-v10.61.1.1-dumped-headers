//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaLayerView-Protocol.h"

@class NSString, SCLoadingIndicatorView;

@interface SCOperaStreamingLoadingLayerView : UIView <SCOperaLayerView>
{
    SCLoadingIndicatorView *_loadingIndicatorView;
    _Bool _loadingIndicatorEnabled;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) _Bool loadingIndicatorEnabled; // @synthesize loadingIndicatorEnabled=_loadingIndicatorEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

