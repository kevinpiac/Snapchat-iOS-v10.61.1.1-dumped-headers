//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAFeedEventBase.h"

@class NSNumber, NSString;

@interface SCAStoryFeedClientReranking : SCAFeedEventBase
{
    NSNumber *rerankingId;
    NSString *streamId;
    NSString *clientModelId;
    NSString *clientReranking;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getClientModelId;
- (id)getClientReranking;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getRerankingId;
- (id)getStreamId;
- (void)setClientModelId:(id)arg1;
- (void)setClientReranking:(id)arg1;
- (void)setRerankingId:(long long)arg1;
- (void)setStreamId:(id)arg1;

@end

