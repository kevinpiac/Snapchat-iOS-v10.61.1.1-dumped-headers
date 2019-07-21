//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCConversationLastMessageMetadata : NSObject <NSCopying>
{
    BOOL _bodyType;
    BOOL _firstMediaType;
    NSString *_senderUsername;
    unsigned long long _messageSequence;
    double _sentTimestampInEpochSecs;
    double _viewedTimestampInEpochSecs;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL bodyType; // @synthesize bodyType=_bodyType;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) BOOL firstMediaType; // @synthesize firstMediaType=_firstMediaType;
- (unsigned long long)hash;
- (id)initWithSenderUsername:(id)arg1 messageSequence:(unsigned long long)arg2 bodyType:(BOOL)arg3 firstMediaType:(BOOL)arg4 sentTimestampInEpochSecs:(double)arg5 viewedTimestampInEpochSecs:(double)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long messageSequence; // @synthesize messageSequence=_messageSequence;
@property(readonly, copy, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;
@property(readonly, nonatomic) double sentTimestampInEpochSecs; // @synthesize sentTimestampInEpochSecs=_sentTimestampInEpochSecs;
@property(readonly, nonatomic) double viewedTimestampInEpochSecs; // @synthesize viewedTimestampInEpochSecs=_viewedTimestampInEpochSecs;

@end
