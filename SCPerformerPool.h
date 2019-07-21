//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, SCQueuePerformerIterator;

@interface SCPerformerPool : NSObject
{
    NSLock *_accessLock;
    _Bool _isMainQueuePerformer;
    unsigned long long _maxNumberOfPerformers;
    SCQueuePerformerIterator *_performerIterator;
    unsigned int _qualityOfService;
}

+ (id)_createPerformerWithLabel:(id)arg1 qualityOfService:(unsigned int)arg2;
+ (id)background;
+ (id)main;
+ (id)userInitiated;
+ (id)userInteractive;
+ (id)utility;
- (void).cxx_destruct;
- (id)initWithMainQueue;
- (id)initWithPerformerQOS:(unsigned int)arg1;
@property(nonatomic) unsigned long long maxNumberOfPerformers;
- (id)providePerformer;
@property(readonly, nonatomic) unsigned int qualityOfService; // @synthesize qualityOfService=_qualityOfService;

@end
