//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCLensExplorerSendToFlow : NSObject
{
    NSString *_lensChallengeName;
}

+ (id)createWithLensChallengeName:(id)arg1 userSession:(id)arg2;
- (void).cxx_destruct;
- (id)_lensChallengeNameWithName:(id)arg1;
- (id)_lensChallengeSubtitleNameWithName:(id)arg1;
- (id)initWithLensChallengeName:(id)arg1;
- (_Bool)isLensChallengesSnap;
- (id)quickSendReplacement;
- (id)replaceConfirmationViewModel:(id)arg1;
- (id)replaceOurStoryModel:(id)arg1;

@end
