//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSpectaclesTask.h"

@class SCSpectaclesContent;

@interface SCSpectaclesTaskDeleteSyncedContent : SCSpectaclesTask
{
    _Bool _finished;
    SCSpectaclesContent *_content;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCSpectaclesContent *content; // @synthesize content=_content;
- (_Bool)handleResponse:(id)arg1;
- (unsigned long long)hash;
- (id)initWithContent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (id)nextRequest:(long long)arg1;
- (double)requiredDelay;
- (_Bool)supportsBatchingOnTransferChannel:(long long)arg1;
- (unsigned long long)type;

@end

