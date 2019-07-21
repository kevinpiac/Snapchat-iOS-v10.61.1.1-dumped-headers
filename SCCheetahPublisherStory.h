//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCCheetahPublisher, SCPublisherShowMetadata, SCPublisherStoryWatchedState;

@interface SCCheetahPublisherStory : NSObject <NSCopying, NSCoding>
{
    _Bool _isLive;
    _Bool _hasCuratedSnaps;
    _Bool _isShareable;
    SCCheetahPublisher *_publisher;
    long long _editionId;
    NSString *_headline;
    NSString *_iconURL;
    unsigned long long _publisherTimestampMsecs;
    NSArray *_snaps;
    SCPublisherStoryWatchedState *_watchedState;
    SCPublisherShowMetadata *_showMetadata;
    long long _totalNumSnaps;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long editionId; // @synthesize editionId=_editionId;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool hasCuratedSnaps; // @synthesize hasCuratedSnaps=_hasCuratedSnaps;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(readonly, copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithPublisher:(id)arg1 editionId:(long long)arg2 headline:(id)arg3 iconURL:(id)arg4 publisherTimestampMsecs:(unsigned long long)arg5 isLive:(_Bool)arg6 snaps:(id)arg7 watchedState:(id)arg8 showMetadata:(id)arg9 hasCuratedSnaps:(_Bool)arg10 isShareable:(_Bool)arg11 totalNumSnaps:(long long)arg12;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(readonly, nonatomic) _Bool isShareable; // @synthesize isShareable=_isShareable;
@property(readonly, copy, nonatomic) SCCheetahPublisher *publisher; // @synthesize publisher=_publisher;
@property(readonly, nonatomic) unsigned long long publisherTimestampMsecs; // @synthesize publisherTimestampMsecs=_publisherTimestampMsecs;
@property(readonly, copy, nonatomic) SCPublisherShowMetadata *showMetadata; // @synthesize showMetadata=_showMetadata;
@property(readonly, copy, nonatomic) NSArray *snaps; // @synthesize snaps=_snaps;
@property(readonly, nonatomic) long long totalNumSnaps; // @synthesize totalNumSnaps=_totalNumSnaps;
@property(readonly, copy, nonatomic) SCPublisherStoryWatchedState *watchedState; // @synthesize watchedState=_watchedState;

@end
