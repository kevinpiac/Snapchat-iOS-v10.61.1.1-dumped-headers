//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCUploadURLLogger : NSObject
{
}

+ (id)shared;
- (void)uploadDidFailWithMediaId:(id)arg1 response:(id)arg2 clientError:(id)arg3;
- (void)uploadDidStart:(unsigned long long)arg1 mediaId:(id)arg2 numBytes:(long long)arg3;
- (void)uploadDidSucceedWithMediaId:(id)arg1;

@end

