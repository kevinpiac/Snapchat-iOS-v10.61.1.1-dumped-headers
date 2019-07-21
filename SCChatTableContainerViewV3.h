//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCCardAnimationViewProtocol-Protocol.h"

@class NSString, SCChatBaseTableView, SCCheetahNewChatsAffordanceView;
@protocol SCNewChatsAffordanceDelegate;

@interface SCChatTableContainerViewV3 : UIView <SCCardAnimationViewProtocol>
{
    SCCheetahNewChatsAffordanceView *_newChatsAffordanceView;
    id <SCNewChatsAffordanceDelegate> _newChatsAffordanceDelegate;
    SCChatBaseTableView *_tableView;
}

- (void).cxx_destruct;
- (void)_fadeInNewChatsAffordance;
- (id)contentView;
- (void)hideChatAffordanceAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideChatAffordanceIfNecessaryAnimated:(_Bool)arg1;
- (id)initWithTableView:(id)arg1 newChatsAffordanceDelegate:(id)arg2;
- (void)layoutSubviews;
- (id)newChatsAffordanceView;
- (void)setMaskViewVisible:(_Bool)arg1;
- (void)showChatAffordanceOnBottomIfNecessary;
- (void)showChatAffordanceOnTopIfNecessary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

