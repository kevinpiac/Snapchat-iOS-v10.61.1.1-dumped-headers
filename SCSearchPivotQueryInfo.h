//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, SCSearchPivotInfo, SCSearchStoryContext;

@interface SCSearchPivotQueryInfo : NSObject <NSCopying>
{
    SCSearchPivotInfo *_pivotInfo;
    SCSearchStoryContext *_storyContext;
    NSDictionary *_extraLayerData;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSDictionary *extraLayerData; // @synthesize extraLayerData=_extraLayerData;
- (unsigned long long)hash;
- (id)initWithPivotInfo:(id)arg1 storyContext:(id)arg2 extraLayerData:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCSearchPivotInfo *pivotInfo; // @synthesize pivotInfo=_pivotInfo;
@property(readonly, copy, nonatomic) SCSearchStoryContext *storyContext; // @synthesize storyContext=_storyContext;

@end

