//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AspectInfo-Protocol.h"

@class NSArray, NSInvocation, NSString;

@interface AspectInfo : NSObject <AspectInfo>
{
    NSArray *_arguments;
    id _instance;
    NSInvocation *_originalInvocation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
- (id)initWithInstance:(id)arg1 invocation:(id)arg2;
@property(readonly, nonatomic) id instance; // @synthesize instance=_instance;
@property(readonly, nonatomic) NSInvocation *originalInvocation; // @synthesize originalInvocation=_originalInvocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

