//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SOJUAdAdFlagDataBuilder : NSObject
{
    NSNumber *_adFlagged;
    NSString *_adFlaggedReason;
    NSString *_adFlaggedNote;
}

+ (id)withJUAdAdFlagData:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAdFlagged:(id)arg1;
- (id)setAdFlaggedNote:(id)arg1;
- (id)setAdFlaggedReason:(id)arg1;
- (id)setAdFlaggedReasonEnum:(long long)arg1;
- (id)setAdFlaggedValue:(_Bool)arg1;

@end

