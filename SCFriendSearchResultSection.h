//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SCFriendSearchResultSection : NSObject
{
    NSString *_sectionHeader;
    NSArray *_friendList;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *friendList; // @synthesize friendList=_friendList;
- (id)initWithSectionHeader:(id)arg1 friendList:(id)arg2;
@property(readonly, copy, nonatomic) NSString *sectionHeader; // @synthesize sectionHeader=_sectionHeader;

@end

