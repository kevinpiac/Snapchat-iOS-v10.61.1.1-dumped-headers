//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TCV3CognacParticipant : NSObject
{
    NSString *_username;
    NSString *_cognacId;
}

+ (id)CognacParticipantWithUsername:(id)arg1 cognacId:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *cognacId; // @synthesize cognacId=_cognacId;
- (id)description;
- (id)initWithUsername:(id)arg1 cognacId:(id)arg2;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;

@end

