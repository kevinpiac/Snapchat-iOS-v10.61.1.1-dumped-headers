//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray;
@protocol SCPerforming;

@interface SCPromisedFutureSharedState : NSObject
{
    id <SCPerforming> _performer;
    _Bool _isComplete;
    id _value;
    NSError *_error;
    NSMutableArray *_handlers;
}

- (void).cxx_destruct;
- (void)completeWithError:(id)arg1;
- (void)completeWithValue:(id)arg1;
- (void)failIfIncomplete;
- (id)initWithPerformer:(id)arg1;
- (void)valueWithCompletion:(CDUnknownBlockType)arg1 performer:(id)arg2;

@end

