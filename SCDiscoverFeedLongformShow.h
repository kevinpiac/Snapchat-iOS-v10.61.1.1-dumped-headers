//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCCheetahPublisher, SCDiscoverFeedLongformShowWatchedState, SCPublisherShowMetadata;

@interface SCDiscoverFeedLongformShow : NSObject <NSCopying, NSCoding>
{
    SCCheetahPublisher *_publisher;
    long long _editionId;
    NSString *_headline;
    NSString *_iconURL;
    unsigned long long _publisherTimestampMsecs;
    NSArray *_snaps;
    SCDiscoverFeedLongformShowWatchedState *_watchedState;
    SCPublisherShowMetadata *_showMetadata;
    long long _totalNumSnaps;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long editionId; // @synthesize editionId=_editionId;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(readonly, copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithPublisher:(id)arg1 editionId:(long long)arg2 headline:(id)arg3 iconURL:(id)arg4 publisherTimestampMsecs:(unsigned long long)arg5 snaps:(id)arg6 watchedState:(id)arg7 showMetadata:(id)arg8 totalNumSnaps:(long long)arg9;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCCheetahPublisher *publisher; // @synthesize publisher=_publisher;
@property(readonly, nonatomic) unsigned long long publisherTimestampMsecs; // @synthesize publisherTimestampMsecs=_publisherTimestampMsecs;
@property(readonly, copy, nonatomic) SCPublisherShowMetadata *showMetadata; // @synthesize showMetadata=_showMetadata;
@property(readonly, copy, nonatomic) NSArray *snaps; // @synthesize snaps=_snaps;
@property(readonly, nonatomic) long long totalNumSnaps; // @synthesize totalNumSnaps=_totalNumSnaps;
@property(readonly, copy, nonatomic) SCDiscoverFeedLongformShowWatchedState *watchedState; // @synthesize watchedState=_watchedState;

@end

