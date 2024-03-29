//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCSnapchatterCellViewActionable-Protocol.h"
#import "SCSnapchatterViewModelConfigurable-Protocol.h"

@class NSString, SCLazy;
@protocol SCImageDownloading, SCLegacyItemDownloading, SCSnapchatterCellViewActionHandling, SCSnapchatterViewModelConfigurable;

@interface SCSnapchatterView : UIView <SCSnapchatterViewModelConfigurable, SCSnapchatterCellViewActionable>
{
    SCLazy *_basicInfoView;
    SCLazy *_friendInfoView;
    SCLazy *_chatInfoView;
    SCLazy *_avatarThumbnailView;
    SCLazy *_snapchatterAccessoryView;
    UIView<SCSnapchatterViewModelConfigurable> *_infoView;
    UIView<SCSnapchatterViewModelConfigurable> *_accessoryView;
    UIView<SCSnapchatterViewModelConfigurable> *_thumbnailView;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _infoFetcher;
    id _viewModel;
    id <SCSnapchatterCellViewActionHandling> _actionHandlingDelegate;
}

- (void).cxx_destruct;
- (void)_setInfoView:(id)arg1;
- (void)_updateAccessoryViewWithAccessoryViewMode:(id)arg1;
- (void)_updateChatViewWithChatInfoViewModel:(id)arg1;
- (void)_updateInfoViewWithBasicInfoViewModel:(id)arg1;
- (void)_updateInfoViewWithFriendInfoViewModel:(id)arg1;
- (void)_updateInfoViewWithInfoViewModel:(id)arg1;
- (void)_updateThumbanilViewWithThumbanilViewModel:(id)arg1;
@property(nonatomic) __weak id <SCSnapchatterCellViewActionHandling> actionHandlingDelegate; // @synthesize actionHandlingDelegate=_actionHandlingDelegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setImageDownloader:(id)arg1;
- (void)setInfoFetcher:(id)arg1;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

