//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCMediaDownloadEntity <NSObject>
- (NSString *)UUID;
- (void)cancelByProducingResumeData;
- (void)resumeWithResultHandler:(void (^)(unsigned long long, id, NSError *))arg1;
- (void)setProgressHandler:(void (^)(double))arg1;
@end

