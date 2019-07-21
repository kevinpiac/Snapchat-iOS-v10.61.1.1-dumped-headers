//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAvatarViewDelegate-Protocol.h"
#import "SCSnapchatterCellViewActionable-Protocol.h"
#import "SCSubscreenAccessoryViewProviding-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, UIView;
@protocol SCSnapchatterCellViewActionHandling;

@interface SCSubscreenAvatarViewProvider : NSObject <SCAvatarViewDelegate, SCSubscreenAccessoryViewProviding, SCViewModelConfigurable, SCSnapchatterCellViewActionable>
{
    id _viewModel;
    UIView *_accessoryView;
    id <SCSnapchatterCellViewActionHandling> _actionHandlingDelegate;
}

- (void).cxx_destruct;
- (void)_handleAvatarAction;
@property(nonatomic) __weak UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) __weak id <SCSnapchatterCellViewActionHandling> actionHandlingDelegate; // @synthesize actionHandlingDelegate=_actionHandlingDelegate;
- (void)handleLongPressOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnBitmojiFromAvatarView:(id)arg1;
- (void)handleTapOnStoryIconFromAvatarView:(id)arg1;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
