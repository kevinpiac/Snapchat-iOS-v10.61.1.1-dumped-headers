//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContentResult-Protocol.h"

@class NSData, NSDictionary, SCIOSContentRetrievalMetrics;

@interface SCIOSContentResult : NSObject <SCContentResult>
{
    NSData *_data;
    NSDictionary *_containedContentMap;
    SCIOSContentRetrievalMetrics *_metrics;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *containedContentMap; // @synthesize containedContentMap=_containedContentMap;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithContainedContentMap:(id)arg1 metrics:(id)arg2;
- (id)initWithData:(id)arg1 containedContentMap:(id)arg2 metrics:(id)arg3;
@property(readonly, nonatomic) SCIOSContentRetrievalMetrics *metrics; // @synthesize metrics=_metrics;

@end

