//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCObservable.h"

@interface SCLatestCombinedObservable : SCObservable
{
    SCObservable *_firstObservable;
    SCObservable *_secondObservable;
    CDUnknownBlockType _combiner;
}

- (void).cxx_destruct;
- (id)initWithFirstObservable:(id)arg1 secondObservable:(id)arg2 combiner:(CDUnknownBlockType)arg3;
- (id)subscribe:(id)arg1;

@end

