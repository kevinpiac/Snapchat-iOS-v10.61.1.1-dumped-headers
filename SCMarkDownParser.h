//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SCMarkDownParser : NSObject
{
    NSString *_displayString;
    NSArray *_links;
    NSArray *_targets;
    NSArray *_colors;
}

- (void).cxx_destruct;
- (long long)assignType:(long long)arg1;
@property(readonly) NSArray *colors; // @synthesize colors=_colors;
@property(readonly) NSString *displayString; // @synthesize displayString=_displayString;
- (id)initWithMarkDownString:(id)arg1;
@property(readonly) NSArray *links; // @synthesize links=_links;
- (void)parser:(id)arg1;
- (long long)reverseTypeOpen:(long long)arg1;
- (long long)stringToType:(id)arg1;
@property(readonly) NSArray *targets; // @synthesize targets=_targets;
- (id)tokenizer:(id)arg1;
- (long long)typeOfString:(id)arg1;
- (id)typeToString:(long long)arg1;

@end

