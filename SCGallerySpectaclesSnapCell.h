//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGallerySnapCell.h"

#import "SCGalleryLagunaContentListener-Protocol.h"

@class NSString, SCGalleryLagunaContentLoader, SCLoadingIndicatorView, UIImageView;

@interface SCGallerySpectaclesSnapCell : SCGallerySnapCell <SCGalleryLagunaContentListener>
{
    UIImageView *_iconView;
    SCGalleryLagunaContentLoader *_contentLoader;
    unsigned long long _transferState;
    SCLoadingIndicatorView *_loadingIndicatorView;
}

- (void).cxx_destruct;
- (void)_startLoadingAnimation;
- (void)_stopLoadingAnimation;
- (void)_updateState;
- (void)dealloc;
- (void)didCancelDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didFinishDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didInterruptDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didPauseForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didReceiveDataForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1 selectMode:(_Bool)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
