//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol PINOperationReference;

@interface PINOperation : NSObject
{
    CDUnknownBlockType _block;
    id <PINOperationReference> _reference;
    unsigned long long _priority;
    NSMutableArray *_completions;
    NSString *_identifier;
    id _data;
}

+ (id)operationWithBlock:(CDUnknownBlockType)arg1 reference:(id)arg2 priority:(unsigned long long)arg3 identifier:(id)arg4 data:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void).cxx_destruct;
- (void)addCompletion:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) id <PINOperationReference> reference; // @synthesize reference=_reference;

@end

