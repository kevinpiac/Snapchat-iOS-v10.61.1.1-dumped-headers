//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCFriendmojiServices : NSObject
{
    SCLazy *_friendmojiService;
    SCLazy *_friendmojiPresenter;
    SCLazy *_friendmojiRegistry;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCLazy *friendmojiPresenter; // @synthesize friendmojiPresenter=_friendmojiPresenter;
@property(readonly, nonatomic) SCLazy *friendmojiRegistry; // @synthesize friendmojiRegistry=_friendmojiRegistry;
@property(readonly, nonatomic) SCLazy *friendmojiService; // @synthesize friendmojiService=_friendmojiService;
- (id)initWithFriendmojiService:(id)arg1 friendmojiPresenter:(id)arg2 friendmojiRegistry:(id)arg3;

@end

