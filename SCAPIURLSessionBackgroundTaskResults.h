//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol SCPerforming;

@interface SCAPIURLSessionBackgroundTaskResults : NSObject
{
    NSMutableDictionary *_keyToResultMap;
    id <SCPerforming> _readWritePerformer;
}

+ (id)shared;
+ (id)stringForTaskResult:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)allKeysAndResults;
- (void)clearTaskResults;
- (id)initForSingleton;
- (void)setTaskResult:(unsigned long long)arg1 forKey:(id)arg2;

@end

