//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCBlockSnapchatterActionHandler, SCDeleteSnapchatterActionHandler, SCEditSnapchatterDisplayNameActionHandler, SCIgnoreSnapchatterActionHandler, SCMuteSnapchatterStoryActionHandler, SCSnapchatter, SCUnblockSnapchatterActionHandler, SCUnmuteSnapchatterStoryActionHandler;
@protocol SCActionHandling;

@interface SCSnapchattersAlertGear : NSObject
{
    SCSnapchatter *_snapchatter;
    long long _placement;
    SCDeleteSnapchatterActionHandler *_deleteSnapchatterActionHandler;
    SCBlockSnapchatterActionHandler *_blockSnapchatterActionHandler;
    SCUnblockSnapchatterActionHandler *_unblockSnapchatterActionHandler;
    SCIgnoreSnapchatterActionHandler *_ignoreSnapchatterActionHandler;
    SCMuteSnapchatterStoryActionHandler *_muteSnapchatterStoryActionHandler;
    SCUnmuteSnapchatterStoryActionHandler *_unmuteSnapchatterStoryActionHandler;
    SCEditSnapchatterDisplayNameActionHandler *_editSnapchatterDisplayNameActionHandler;
    id <SCActionHandling> _reportActionHander;
}

- (void).cxx_destruct;
- (id)blockActionButtonHeavyStyle;
- (id)blockActionButtonLightStyle;
- (id)editDisplayNameActionButton;
- (id)ignoreActionButton;
- (id)initWithSnapchatter:(id)arg1 snapchattersDataMutator:(id)arg2 placement:(long long)arg3 reportActionHander:(id)arg4;
- (id)muteStoryActionButton;
- (id)removeFriendActionButtonHeavyStyle;
- (id)removeFriendActionButtonLightStyle;
- (id)reportActionButton;
- (id)unblockActionButton;
- (id)unmuteStoryActionButton;

@end

