//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFriendmojiRegistry-Protocol.h"

@class User;

@interface SCUserFriendmojiRegistry : NSObject <SCFriendmojiRegistry>
{
    User *_user;
}

- (void).cxx_destruct;
- (id)emojiForFriendmojiType:(id)arg1;
- (id)emojiInfoForFriendmojiType:(id)arg1;
- (id)initWithUser:(id)arg1;
- (id)registerEmoji:(id)arg1 forOfficialUserWithId:(id)arg2;
- (void)registerReadOnlyEmojiInfoDict:(id)arg1;

@end

