/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Mail/MFLocalAccount.h>

@interface MFParentalControlAccount : MFLocalAccount
{
}

+ (id)_mailboxNameForAccount:(id)arg1;
+ (id)storeForAccount:(id)arg1;
+ (id)storeForMailbox:(id)arg1;
+ (id)mailboxForAccount:(id)arg1;
+ (id)allMailboxes;
+ (id)originalAccountForIncomingMailbox:(id)arg1;
+ (id)parentalControlAccount;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)mailboxPathExtension;
- (Class)storeClassForMailbox:(id)arg1;
- (void)dealloc;

@end

