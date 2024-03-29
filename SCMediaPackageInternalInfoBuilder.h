//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SCMediaPackageInternalInfoBuilder : NSObject
{
    NSString *_mediaPackageId;
    NSDate *_obsoleteTime;
    _Bool _isLocked;
}

+ (id)mediaPackageInternalInfo;
+ (id)mediaPackageInternalInfoFromExistingMediaPackageInternalInfo:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withIsLocked:(_Bool)arg1;
- (id)withMediaPackageId:(id)arg1;
- (id)withObsoleteTime:(id)arg1;

@end

