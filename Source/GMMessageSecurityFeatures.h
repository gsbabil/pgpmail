//
//  GMMessageSecurityParseResult.h
//  GPGMail
//
//  Created by Lukas Pitschl on 01.10.16.
//
//

#import <Foundation/Foundation.h>

#import "MCMimeBody.h"

// TODO: Should probably be called security properties. 
@interface GMMessageSecurityFeatures : NSObject

+ (GMMessageSecurityFeatures *)securityFeaturesFromMimeBody:(GM_CAST_CLASS(MimePart *, id))mimeBody;

@property (assign) BOOL PGPInfoCollected;
@property (assign) BOOL PGPEncrypted;
@property (assign) BOOL PGPPartlyEncrypted;
@property (assign) BOOL PGPSigned;
@property (assign) BOOL PGPPartlySigned;
@property (assign) BOOL PGPDecrypted;
@property (assign) BOOL PGPVerified;
@property (retain) NSArray *PGPSignatures;
@property (retain, readonly) NSArray *PGPSignatureLabels;
@property (retain) NSArray *PGPErrors;
@property (assign) NSUInteger numberOfPGPAttachments;
@property (retain) NSArray *PGPAttachments;

@end
