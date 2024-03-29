//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCImpalaPublicProfileLoggingInfo : NSObject <NSCopying>
{
    long long _sourcePageType;
    NSString *_sourcePageSessionId;
    long long _pageEntryType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithSourcePageType:(long long)arg1 sourcePageSessionId:(id)arg2 pageEntryType:(long long)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long pageEntryType; // @synthesize pageEntryType=_pageEntryType;
@property(readonly, copy, nonatomic) NSString *sourcePageSessionId; // @synthesize sourcePageSessionId=_sourcePageSessionId;
@property(readonly, nonatomic) long long sourcePageType; // @synthesize sourcePageType=_sourcePageType;

@end

