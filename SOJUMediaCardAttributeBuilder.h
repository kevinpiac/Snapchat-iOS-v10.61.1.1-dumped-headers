//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SOJUMediaCardAttributeBuilder : NSObject
{
    NSNumber *_start;
    NSNumber *_end;
    NSString *_type;
    NSString *_url;
}

+ (id)withJUMediaCardAttribute:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setEnd:(id)arg1;
- (id)setEndValue:(int)arg1;
- (id)setStart:(id)arg1;
- (id)setStartValue:(int)arg1;
- (id)setType:(id)arg1;
- (id)setTypeEnum:(long long)arg1;
- (id)setUrl:(id)arg1;

@end

