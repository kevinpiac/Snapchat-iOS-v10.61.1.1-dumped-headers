//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCCardBackgroundView, SCSearchActionButton, SCSnapchatterAvatarContainerView, UIImageView, UILabel;
@protocol SCActionHandling, SCImageDownloading;

@interface SCAddFriendsTakeoverCardView : UIView <SCViewModelConfigurable, SCActionable>
{
    SCCardBackgroundView *_backgroundView;
    UIImageView *_backgroundImageView;
    SCSnapchatterAvatarContainerView *_avatarContainerView;
    UILabel *_usernameLabel;
    UILabel *_displayLabel;
    UILabel *_descriptionLabel;
    UILabel *_secondaryDescriptionLabel;
    SCSearchActionButton *_addButton;
    SCSearchActionButton *_ignoreButton;
    id <SCImageDownloading> _imageDownloader;
    id _viewModel;
    id <SCActionHandling> _actionHandler;
}

- (void).cxx_destruct;
- (void)_handleButtonTap:(id)arg1;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (id)init;
- (void)layoutSubviews;
- (void)setImageDownloader:(id)arg1;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

