//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString;

@interface FABURLBuilder : NSObject
{
    NSMutableString *_URLString;
    unsigned long long _queryParams;
}

+ (id)URLWithBase:(id)arg1;
- (void).cxx_destruct;
- (id)URL;
@property(retain, nonatomic) NSMutableString *URLString; // @synthesize URLString=_URLString;
- (void)appendComponent:(id)arg1;
- (void)appendValue:(id)arg1 forQueryParam:(id)arg2;
- (void)escapeAndAppendComponent:(id)arg1;
- (id)escapeString:(id)arg1;
- (id)init;
@property(nonatomic) unsigned long long queryParams; // @synthesize queryParams=_queryParams;

@end

