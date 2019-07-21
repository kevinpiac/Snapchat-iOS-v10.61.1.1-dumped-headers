//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserSessionScoped-Protocol.h"

@class NSString, SCShazamAddFriendList, SCShazamConfiguration, SCUserSession;

@interface SCShazamConfigurationManager : NSObject <SCUserSessionScoped>
{
    _Bool _initiatedFetchArtistnameList;
    SCShazamConfiguration *_configuration;
    SCShazamAddFriendList *_shazamAddFriendList;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
@property(copy) SCShazamConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)fetchArtistnameList;
- (id)initWithUserSession:(id)arg1;
@property _Bool initiatedFetchArtistnameList; // @synthesize initiatedFetchArtistnameList=_initiatedFetchArtistnameList;
- (void)invalidate;
@property(copy) SCShazamAddFriendList *shazamAddFriendList; // @synthesize shazamAddFriendList=_shazamAddFriendList;
@property(retain) SCUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
