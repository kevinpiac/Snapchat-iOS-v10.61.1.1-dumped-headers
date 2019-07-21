//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSearchPersonLoggingModel : NSObject <NSCopying>
{
    _Bool _isVerified;
    NSString *_username;
    long long _searchResultReason;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithUsername:(id)arg1 isVerified:(_Bool)arg2 searchResultReason:(long long)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(readonly, nonatomic) long long searchResultReason; // @synthesize searchResultReason=_searchResultReason;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

@end

