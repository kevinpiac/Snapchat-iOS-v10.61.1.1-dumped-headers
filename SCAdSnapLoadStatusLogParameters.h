//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCAdSnapLoadStatusLogParameters : NSObject <NSCopying>
{
    _Bool _snapLoadedOnEntry;
    _Bool _snapLoadedOnExit;
    double _mediaLoadWaitTimeInSec;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithSnapLoadedOnEntry:(_Bool)arg1 snapLoadedOnExit:(_Bool)arg2 mediaLoadWaitTimeInSec:(double)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double mediaLoadWaitTimeInSec; // @synthesize mediaLoadWaitTimeInSec=_mediaLoadWaitTimeInSec;
@property(readonly, nonatomic) _Bool snapLoadedOnEntry; // @synthesize snapLoadedOnEntry=_snapLoadedOnEntry;
@property(readonly, nonatomic) _Bool snapLoadedOnExit; // @synthesize snapLoadedOnExit=_snapLoadedOnExit;

@end

