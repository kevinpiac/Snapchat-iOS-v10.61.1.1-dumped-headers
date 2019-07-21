//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, SCDiscoverChannels, SCDiscoverChannelsModel, SCUserSession;

@interface SCDiscoverDSnapExpirationValidator : NSObject
{
    SCDiscoverChannelsModel *_channelsModel;
    SCUserSession *_userSession;
    SCDiscoverChannels *_discoverChannels;
    NSMutableDictionary *_cachedResponses;
    NSMutableSet *_inProgressRequests;
}

- (void).cxx_destruct;
- (void)_channelIconForPublisher:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchChannelIconAndCompletionWithPublisher:(id)arg1 dSnapId:(id)arg2 responseDictionary:(id)arg3 successBlock:(CDUnknownBlockType)arg4;
- (void)_handleDSnapValidationWithPublisherID:(id)arg1 dSnapId:(id)arg2 responseDictionary:(id)arg3 shouldUpdateChannelsResponse:(_Bool)arg4 successBlock:(CDUnknownBlockType)arg5;
- (void)_handleNetworkFailureWithDSnapId:(id)arg1 error:(id)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_handleNetworkResponseWithPublisherID:(id)arg1 dSnapId:(id)arg2 responseDictionary:(id)arg3 successBlock:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSMutableDictionary *cachedResponses; // @synthesize cachedResponses=_cachedResponses;
- (id)channelForPublisher:(id)arg1;
- (void)clearCachedResponses;
@property(retain, nonatomic) SCDiscoverChannels *discoverChannels; // @synthesize discoverChannels=_discoverChannels;
@property(retain, nonatomic) NSMutableSet *inProgressRequests; // @synthesize inProgressRequests=_inProgressRequests;
- (id)initWithDiscoverChannelsModel:(id)arg1 userSession:(id)arg2;
- (unsigned long long)linkableStateForString:(id)arg1;
- (void)validateDSnapId:(id)arg1 forEdition:(id)arg2 forPublisher:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;

@end

