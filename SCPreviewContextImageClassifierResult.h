//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCPreviewContextImageClassifierResult : NSObject <NSCopying>
{
    NSArray *_tags;
    NSArray *_confidenceInfos;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *confidenceInfos; // @synthesize confidenceInfos=_confidenceInfos;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithTags:(id)arg1 confidenceInfos:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;

@end

