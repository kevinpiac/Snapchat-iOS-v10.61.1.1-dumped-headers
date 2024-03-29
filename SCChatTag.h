//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCChatTag : NSObject
{
    NSString *_username;
    long long _tagOrder;
    long long _start;
    long long _end;
}

+ (id)_getPotentialTagIndices:(id)arg1;
+ (id)createChatTagWithUsername:(id)arg1 tagOrder:(long long)arg2;
+ (id)createMentionsMediaCardAttribute:(id)arg1;
+ (long long)findTagOrderInString:(id)arg1 atIndex:(long long)arg2;
+ (id)getTagWithOrder:(long long)arg1 taggedUsers:(id)arg2;
+ (id)removeTagWithOrder:(long long)arg1 from:(id)arg2;
+ (id)setTagStartAndEnd:(id)arg1 inputText:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long end; // @synthesize end=_end;
- (id)initWithUserName:(id)arg1 tagOrder:(long long)arg2;
@property(nonatomic) long long start; // @synthesize start=_start;
@property(nonatomic) long long tagOrder; // @synthesize tagOrder=_tagOrder;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

@end

