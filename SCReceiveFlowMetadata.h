//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCReceiveFlowMetadata : NSObject <NSCopying>
{
    NSString *_messageId;
    NSString *_mediaId;
    NSString *_messageBodyType;
    long long _mediaType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithMessageId:(id)arg1 mediaId:(id)arg2 messageBodyType:(id)arg3 mediaType:(long long)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *messageBodyType; // @synthesize messageBodyType=_messageBodyType;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;

@end

