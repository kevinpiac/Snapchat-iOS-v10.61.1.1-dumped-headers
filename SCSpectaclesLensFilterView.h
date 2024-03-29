//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOverlayFilterView.h"

@class SCGeoFilterLensView, SCLens;

@interface SCSpectaclesLensFilterView : SCOverlayFilterView
{
    SCGeoFilterLensView *_lensView;
    SCLens *_lens;
}

+ (id)filterNameForLens:(id)arg1;
- (void).cxx_destruct;
- (id)displayName;
- (_Bool)hasImage;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2 userSession:(id)arg3;
@property(readonly, nonatomic) SCLens *lens; // @synthesize lens=_lens;
- (void)setIsLoadingIndicatorHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setIsOverlayHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)shouldRespondToTap:(id)arg1;
- (void)startViewing;

@end

