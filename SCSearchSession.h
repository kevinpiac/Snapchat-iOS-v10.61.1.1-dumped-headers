//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCAddFriendsSnapchatterDataProvider, SCMomentsOperaPresenter, SCSearchDiscoverStoriesPresenter, SCSearchFriendProvider, SCSearchFriendsDataProvider, SCSearchStoriesPresenter, SCUserSession;
@protocol SCLensExplorerLensUnlockerProtocol;

@interface SCSearchSession : NSObject
{
    NSString *_sessionId;
    SCUserSession *_userSession;
    long long _launchSource;
    long long _entryPoint;
    SCSearchFriendProvider *_friendProvider;
    SCSearchFriendsDataProvider *_friendsDataProvider;
    SCAddFriendsSnapchatterDataProvider *_addFriendsSnapchatterDataProvider;
    SCSearchStoriesPresenter *_storiesPresenter;
    SCSearchDiscoverStoriesPresenter *_discoverStoriesPresenter;
    SCMomentsOperaPresenter *_momentsOperaPresenter;
    id <SCLensExplorerLensUnlockerProtocol> _lensExplorerUnlocker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCAddFriendsSnapchatterDataProvider *addFriendsSnapchatterDataProvider; // @synthesize addFriendsSnapchatterDataProvider=_addFriendsSnapchatterDataProvider;
- (id)debugInfo;
@property(readonly, nonatomic) SCSearchDiscoverStoriesPresenter *discoverStoriesPresenter; // @synthesize discoverStoriesPresenter=_discoverStoriesPresenter;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) SCSearchFriendProvider *friendProvider; // @synthesize friendProvider=_friendProvider;
@property(readonly, nonatomic) SCSearchFriendsDataProvider *friendsDataProvider; // @synthesize friendsDataProvider=_friendsDataProvider;
- (id)initWithUserSession:(id)arg1 launchSource:(long long)arg2;
- (id)initWithUserSession:(id)arg1 launchSource:(long long)arg2 pageType:(unsigned long long)arg3;
@property(readonly, nonatomic) long long launchSource; // @synthesize launchSource=_launchSource;
@property(retain, nonatomic) id <SCLensExplorerLensUnlockerProtocol> lensExplorerUnlocker; // @synthesize lensExplorerUnlocker=_lensExplorerUnlocker;
@property(readonly, nonatomic) SCMomentsOperaPresenter *momentsOperaPresenter; // @synthesize momentsOperaPresenter=_momentsOperaPresenter;
- (id)presentingStoryId;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) SCSearchStoriesPresenter *storiesPresenter; // @synthesize storiesPresenter=_storiesPresenter;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;

@end
