//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface SCCapturedBatchCaptureRecoveryData : NSObject <NSCoding, NSCopying>
{
    NSMutableArray *_mutableSegments;
}

- (void).cxx_destruct;
- (void)addRecoveryData:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)increaseAttemptedRecoveryCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)removeAllRecoveryData;
- (void)removeSegmentAtIndex:(unsigned long long)arg1;
- (id)segments;

@end

